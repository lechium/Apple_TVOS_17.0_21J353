//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/AFUISiriRemoteViewHosting-Protocol.h>

@class NSString;
@protocol AFUISiriContentDelegate;

@protocol AFUISiriContent <AFUISiriRemoteViewHosting>
@property(nonatomic) long long mode;
@property(nonatomic) long long siriSessionState;

@optional
- (void)setRequestHandlingStatus:(unsigned long long)arg1;
- (void)setContentViewsAlpha:(double)arg1;
- (void)setSiriContentDelegate:(id <AFUISiriContentDelegate>)arg1;
- (void)setAuxiliaryViewsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setVoiceActivationMaskViewVisible:(_Bool)arg1;
- (void)showPasscodeUnlockWithStatusText:(NSString *)arg1 subtitle:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3 unlockCompletionHandler:(void (^)(long long))arg4;
@end

