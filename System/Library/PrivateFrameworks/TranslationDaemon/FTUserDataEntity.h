//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTUserDataEntity : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct UserDataEntity *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c546f
- (id)flatbuffData;	// IMP=0x00000000000c52f2
- (Offset_0b2b2f48)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c4ee0
- (void)attributes_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4d2f
- (unsigned long long)attributes_count;	// IMP=0x00000000000c4c93
- (id)attributes_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000c4b9a
@property(readonly, nonatomic) NSArray *attributes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c4a71
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserDataEntity *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c48c6
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserDataEntity *)arg2;	// IMP=0x00000000000c48b1
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c4897
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c4880

@end
