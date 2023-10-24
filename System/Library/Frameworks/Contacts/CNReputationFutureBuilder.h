//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNFuture, CNReputationContactsAdapter, CNReputationCoreRecentsAdapter, CNReputationHandle, CNReputationLogger;

__attribute__((visibility("hidden")))
@interface CNReputationFutureBuilder : NSObject
{
    CNReputationHandle *_handle;	// 8 = 0x8
    CNReputationCoreRecentsAdapter *_coreRecentsAdapter;	// 16 = 0x10
    CNReputationContactsAdapter *_contactsAdapter;	// 24 = 0x18
    CNReputationLogger *_logger;	// 32 = 0x20
    CNFuture *_scoreFuture;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000991ac
@property(retain, nonatomic) CNFuture *scoreFuture; // @synthesize scoreFuture=_scoreFuture;
@property(readonly, nonatomic) CNReputationLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) CNReputationContactsAdapter *contactsAdapter; // @synthesize contactsAdapter=_contactsAdapter;
@property(readonly, nonatomic) CNReputationCoreRecentsAdapter *coreRecentsAdapter; // @synthesize coreRecentsAdapter=_coreRecentsAdapter;
@property(readonly, copy, nonatomic) CNReputationHandle *handle; // @synthesize handle=_handle;
- (id)build;	// IMP=0x0000000000098f53
- (id)contactsTrustForPhoneNumber:(id)arg1;	// IMP=0x0000000000098bd2
- (void)addContactsTrustForPhoneNumber;	// IMP=0x00000000000989f0
- (id)contactsTrustForEmailAddress:(id)arg1;	// IMP=0x0000000000098715
- (void)addContactsTrustForEmailAddress;	// IMP=0x0000000000098533
- (id)coreRecentsTrustForHandle:(id)arg1;	// IMP=0x0000000000098258
- (void)addCoreRecentsTrust;	// IMP=0x0000000000098076
- (id)initWithHandle:(id)arg1 coreRecentsAdapter:(id)arg2 contactsAdapter:(id)arg3 logger:(id)arg4;	// IMP=0x0000000000097f80

@end

