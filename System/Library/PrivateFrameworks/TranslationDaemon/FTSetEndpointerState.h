//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTSetEndpointerState : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SetEndpointerState *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c19ce
- (id)flatbuffData;	// IMP=0x00000000000c1851
- (Offset_8e83f458)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c1809
@property(readonly, nonatomic) _Bool enable_server_side_endpoint;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c17cd
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetEndpointerState *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c1622
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetEndpointerState *)arg2;	// IMP=0x00000000000c160d
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c15f3
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c15dc

@end

