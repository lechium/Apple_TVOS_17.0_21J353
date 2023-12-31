//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface PrivacyPromptOperation : ISOperation
{
    CDUnknownBlockType _completion;	// 96 = 0x60
    NSString *_privacyIdentifier;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_privacyPromptSemaphore;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000013a563
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *privacyPromptSemaphore; // @synthesize privacyPromptSemaphore=_privacyPromptSemaphore;
@property(copy, nonatomic) NSString *privacyIdentifier; // @synthesize privacyIdentifier=_privacyIdentifier;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)_privacyAcknowledgementURLString;	// IMP=0x001000000013a241
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x001000000013a056
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x0010000000139e94
- (void)run;	// IMP=0x0010000000139c16
- (id)initWithPrivacyIdentifier:(id)arg1;	// IMP=0x0010000000139ba8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

