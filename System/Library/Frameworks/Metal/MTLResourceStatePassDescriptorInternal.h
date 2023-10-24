//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLResourceStatePassDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLResourceStatePassDescriptorInternal : MTLResourceStatePassDescriptor
{
    struct MTLResourceStatePassDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)resourceStatePassDescriptor;	// IMP=0x006000000010cd13
- (id)sampleBufferAttachments;	// IMP=0x000000000010cffb
- (const struct MTLResourceStatePassDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000010cfeb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010cf4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010ce22
- (unsigned long long)hash;	// IMP=0x000000000010cdc2
- (void)dealloc;	// IMP=0x000000000010cd80
- (id)init;	// IMP=0x000000000010cd2d

@end

