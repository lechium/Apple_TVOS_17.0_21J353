//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UAUserActivityInfo;

@interface UAReplayClientController
{
    UAUserActivityInfo *_item;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001bdc2
@property(retain) UAUserActivityInfo *item; // @synthesize item=_item;
- (id)statusString;	// IMP=0x001000000001bd2f
- (id)userActivityInfoForUUID:(id)arg1;	// IMP=0x001000000001bc36
- (id)eligibleAdvertiseableItemsInOrder;	// IMP=0x001000000001bb9b
- (id)items;	// IMP=0x001000000001bb00
- (void)removeItem:(id)arg1;	// IMP=0x001000000001b9ca
- (void)addItem:(id)arg1;	// IMP=0x001000000001b97d
- (void)dealloc;	// IMP=0x001000000001b90f
- (id)initWithManager:(id)arg1;	// IMP=0x001000000001b8d9

@end

