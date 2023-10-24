//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDRemoteLoginMessageSender, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginAnisetteDataProvider : HMFObject
{
    NSString *_sessionID;	// 8 = 0x8
    HMDRemoteLoginMessageSender *_remoteMessageSender;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000488f1f
- (void).cxx_destruct;	// IMP=0x0000000000488791
@property(retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000488531
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000488320
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000488122
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000487ef8
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000487cfa
- (id)logIdentifier;	// IMP=0x0000000000487ce8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000487cdd
- (id)initWithSessionID:(id)arg1 remoteMessageSender:(id)arg2;	// IMP=0x0000000000487c3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
