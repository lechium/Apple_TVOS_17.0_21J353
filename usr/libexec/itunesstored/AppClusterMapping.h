//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AppClusterMapping : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSNumber *_clusterID;	// 16 = 0x10
    NSNumber *_clusterVersionID;	// 24 = 0x18
    NSNumber *_foregroundUsageWeight;	// 32 = 0x20
    NSNumber *_itemID;	// 40 = 0x28
    NSNumber *_launchWeight;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001cd1db
@property(readonly) NSNumber *launchWeight; // @synthesize launchWeight=_launchWeight;
@property(readonly) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly) NSNumber *foregroundUsageWeight; // @synthesize foregroundUsageWeight=_foregroundUsageWeight;
@property(readonly) NSNumber *clusterVersionID; // @synthesize clusterVersionID=_clusterVersionID;
@property(readonly) NSNumber *clusterID; // @synthesize clusterID=_clusterID;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)_updateWithDictionary:(id)arg1;	// IMP=0x00100000001cd0af
- (id)description;	// IMP=0x00100000001ccf97
- (id)initWithItemID:(id)arg1 bundleID:(id)arg2 clusterVersionID:(id)arg3 dictionary:(id)arg4;	// IMP=0x00100000001cce8b

@end

