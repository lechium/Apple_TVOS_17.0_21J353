//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface SagaCloudAddPlaylistOperation
{
    NSString *_playlistGlobalID;	// 8 = 0x8
    NSDictionary *_globalIDToSagaIDMap;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000fbc0b
- (void).cxx_destruct;	// IMP=0x00200000000fb755
@property(retain, nonatomic) NSDictionary *globalIDToSagaIDMap; // @synthesize globalIDToSagaIDMap=_globalIDToSagaIDMap;
- (void)removePendingAddedItemsForPermanentlyFailedOperation;	// IMP=0x00100000000fb493
- (void)processAddedItems:(id)arg1;	// IMP=0x00100000000fb3ad
- (void)logCloudAddRequestDescription;	// IMP=0x00100000000fb30e
- (id)cloudAddRequestWithDatabaseID:(unsigned int)arg1;	// IMP=0x00100000000fb2c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000fb243
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000fb1a8
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 playlistGlobalID:(id)arg3;	// IMP=0x00100000000fb126
- (id)initWithClientIdentity:(id)arg1 playlistGlobalID:(id)arg2;	// IMP=0x00100000000fb0a0

@end

