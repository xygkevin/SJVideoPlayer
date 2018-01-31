//
//  SJVideoPlayerControlView.h
//  SJVideoPlayerProject
//
//  Created by BlueDancer on 2017/11/29.
//  Copyright © 2017年 SanJiang. All rights reserved.
//

#import "SJVideoPlayerBaseView.h"
#import "SJVideoPlayerControlViewEnumHeader.h"
#import "SJVideoPlayerTopControlView.h"
#import "SJVideoPlayerLeftControlView.h"
#import "SJVideoPlayerBottomControlView.h"
#import "SJVideoPlayerCenterControlView.h"
#import "SJVideoPlayerPreviewView.h"


NS_ASSUME_NONNULL_BEGIN

@class SJVideoPreviewModel, SJVideoPlayerAssetCarrier, SJOrentationObserver;

@protocol SJVideoPlayerControlViewDelegate;

@interface SJVideoPlayerControlView : SJVideoPlayerBaseView

- (instancetype)initWithOrentationObserver:(__weak SJOrentationObserver *)orentationObserver;

@property (nonatomic, weak, readwrite, nullable) id<SJVideoPlayerControlViewDelegate> delegate;
@property (nonatomic, weak, readwrite, nullable) SJVideoPlayerAssetCarrier *asset;

@property (nonatomic, strong, readonly) SJVideoPlayerTopControlView *topControlView;
@property (nonatomic, strong, readonly) SJVideoPlayerPreviewView *previewView;
@property (nonatomic, strong, readonly) SJVideoPlayerLeftControlView *leftControlView;
@property (nonatomic, strong, readonly) SJVideoPlayerCenterControlView *centerControlView;
@property (nonatomic, strong, readonly) SJVideoPlayerBottomControlView *bottomControlView;
@property (nonatomic, strong, readonly) SJSlider *bottomProgressSlider;

@property (nonatomic, assign, readonly) CGFloat topViewHeight;
@property (nonatomic, assign, readonly) CGFloat leftViewWidth;
@property (nonatomic, assign, readonly) CGFloat bottomViewHeight;

@end

@protocol SJVideoPlayerControlViewDelegate <NSObject>
			
@optional
- (void)controlView:(SJVideoPlayerControlView *)controlView clickedBtnTag:(SJVideoPlayControlViewTag)tag;
- (void)controlView:(SJVideoPlayerControlView *)controlView didSelectPreviewItem:(SJVideoPreviewModel *)item;

@end

NS_ASSUME_NONNULL_END
