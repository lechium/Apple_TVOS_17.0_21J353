//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10Foundation13__NSSwiftData : NSData
{
    MISSING_TYPE *_backing;	// 8 = 0x8
    MISSING_TYPE *_range;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003523f0
- (id)initWithData:(id)arg1;	// IMP=0x0000000000352300
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x0000000000352210
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0000000000352150
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000352070
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000351ef0
- (id)initWithBytesNoCopy:(void *)arg1 length:(long long)arg2 deallocator:(CDUnknownBlockType)arg3;	// IMP=0x0000000000351d50
- (id)initWithBytesNoCopy:(void *)arg1 length:(long long)arg2 freeWhenDone:(_Bool)arg3;	// IMP=0x0000000000351be0
- (id)initWithBytesNoCopy:(void *)arg1 length:(long long)arg2;	// IMP=0x0000000000351b50
- (id)initWithBytes:(void *)arg1 length:(long long)arg2;	// IMP=0x0000000000351b30
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000351a70
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000003519d0
- (id)initWithBase64Encoding:(id)arg1;	// IMP=0x00000000003519b0
- (id)initWithContentsOfMappedFile:(id)arg1;	// IMP=0x0000000000351990
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003518f0
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003517a0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000351740
- (id)init;	// IMP=0x00000000003516e0
- (_Bool)_providesConcreteBacking;	// IMP=0x00000000003516d0
- (_Bool)_isCompact;	// IMP=0x00000000003516c0
- (id)mutableCopyWithZone:(void *)arg1;	// IMP=0x0000000000351640
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000351630
@property(nonatomic, readonly) void *bytes;
@property(nonatomic, readonly) long long length;

@end
