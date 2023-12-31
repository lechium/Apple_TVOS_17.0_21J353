//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol CSCoreSpeechServiceListenerDelegate <NSObject>
- (oneway void)getFirstPassRunningMode:(void (^)(long long))arg1;
- (oneway void)requestUpdatedSATAudio:(void (^)(_Bool))arg1;
- (oneway void)clearTriggerCount:(void (^)(void))arg1;
- (oneway void)getTriggerCount:(void (^)(unsigned long long))arg1;
- (oneway void)setDelayInterstitialSounds:(NSArray *)arg1 level:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)getVoiceTriggerRTModelRequestOptionsWithEndpointId:(NSString *)arg1 completion:(void (^)(CSVoiceTriggerRTModelRequestOptions *))arg2;
- (oneway void)getCurrentVoiceTriggerLocaleWithEndpointId:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (oneway void)getTestResponse:(void (^)(NSString *))arg1;
@end

