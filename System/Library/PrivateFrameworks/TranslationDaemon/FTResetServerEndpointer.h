//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTResetServerEndpointer : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ResetServerEndpointer *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ed07d
- (id)flatbuffData;	// IMP=0x00000000000ecf00
- (Offset_012fa2a8)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000eceb8
@property(readonly, nonatomic) long long speech_packet_count;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ece7f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ResetServerEndpointer *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000eccd4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ResetServerEndpointer *)arg2;	// IMP=0x00000000000eccbf
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ecca5
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ecc8e

@end

