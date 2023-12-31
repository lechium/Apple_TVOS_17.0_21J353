//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SilentRequestPresenter : NSObject
{
}

- (void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x002000000013b94a
- (void)presentEngagementRequest:(id)arg1 withClientInfo:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000013b828
- (void)presentDialogRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000013b6ed
- (void)presentAuthenticateRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000013b25b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

