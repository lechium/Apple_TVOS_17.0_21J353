//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADHomeAnnouncementContextAdaptor, AFInstanceContext, NSString;
@protocol AFContextDonation;

@interface ADHomeAnnouncementContextProvider : NSObject
{
    id <AFContextDonation> _donationService;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    ADHomeAnnouncementContextAdaptor *_homeAnnouncementContextAdaptor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ba0fc
- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ba0db
- (void)handleHomeAnnouncementSnapshotUpdate:(id)arg1;	// IMP=0x00100000000b9f4e
- (id)initWithDonationService:(id)arg1 instanceContext:(id)arg2;	// IMP=0x00100000000b9d79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

