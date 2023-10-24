//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUIFoundation/NSObject-Protocol.h>

@class AFUIBridgeClient, NSString;

@protocol AFUIBridgeClientDelegate <NSObject>

@optional
- (oneway void)uiBridgeClientReceivedShowAssetsDownloadPrompt:(AFUIBridgeClient *)arg1;
- (oneway void)uiBridgeClient:(AFUIBridgeClient *)arg1 receivedSpeechMitigationResult:(unsigned long long)arg2;
- (oneway void)uiBridgeClientDetectedSiriDirectedSpeech:(AFUIBridgeClient *)arg1;
- (oneway void)uiBridgeClient:(AFUIBridgeClient *)arg1 detectedSpeechStartWithShouldDuckTTS:(_Bool)arg2;
- (oneway void)uiBridgeClientDetectedSpeechStart:(AFUIBridgeClient *)arg1;
- (oneway void)uiBridgeClient:(AFUIBridgeClient *)arg1 didStopAttendingUnexpectedlyWithReason:(unsigned long long)arg2;
- (oneway void)uiBridgeClientDidStartAttending:(AFUIBridgeClient *)arg1 withRootRequestId:(NSString *)arg2;
- (oneway void)uiBridgeClientDidStartAttending:(AFUIBridgeClient *)arg1;
- (oneway void)uiBridgeClientWillStartAttending:(AFUIBridgeClient *)arg1;
@end

