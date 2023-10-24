//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCoreDataCloudTransformChangeSet : NSObject
{
    NSMutableSet *_inserts;	// 8 = 0x8
    NSMutableDictionary *_updates;	// 16 = 0x10
    NSMutableDictionary *_deletes;	// 24 = 0x18
    _Bool _shouldTransform;	// 32 = 0x20
    NSUUID *_homeModelID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000638c25
- (id)description;	// IMP=0x0000000000638976

@end
