//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSNumber;

@interface ClipAdditionalData : NSObject
{
    NSNumber *_archiveSize;	// 8 = 0x8
    NSNumber *_digestChunk;	// 16 = 0x10
    NSArray *_digestHashes;	// 24 = 0x18
    NSData *_dpInfo;	// 32 = 0x20
    long long _packageCompression;	// 40 = 0x28
    NSData *_sinf;	// 48 = 0x30
    NSNumber *_uncompressedSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000674c4
- (id)description;	// IMP=0x00100000000672f0

@end

