//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SiriTTSDaemonSession, SiriTTSSpeechRequest;

__attribute__((visibility("hidden")))
@interface _LTOfflineSpeechSynthesizer : NSObject
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    SiriTTSDaemonSession *_session;	// 16 = 0x10
    SiriTTSSpeechRequest *_currentRequest;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003fd31
- (void)cancel;	// IMP=0x000000000003fcc1
- (void)speak:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000003f6c2
- (id)initWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f61d

@end

