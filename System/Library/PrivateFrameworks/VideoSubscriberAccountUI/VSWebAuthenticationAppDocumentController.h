//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationAppDocumentController
{
}

- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000053732
- (id)_newViewModel;	// IMP=0x0000000000053721
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x0000000000053669
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x00000000000535ad
- (void)didAddMessagesToMessageQueue:(id)arg1;	// IMP=0x0000000000053047
- (void)messagePort:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0000000000052f4a
- (void)_sendMessage:(id)arg1;	// IMP=0x0000000000052c35
- (_Bool)_updateWebAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000052b18
- (_Bool)_updateWebAuthenticationViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000052a39
- (id)_webAuthenticationViewModelWithViewModel:(id)arg1;	// IMP=0x0000000000052977
- (id)initWithAppDocument:(id)arg1;	// IMP=0x000000000005283d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

