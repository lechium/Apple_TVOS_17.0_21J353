//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLBlitPassDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLBlitPassDescriptorInternal : MTLBlitPassDescriptor
{
    struct MTLBlitPassDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)blitPassDescriptor;	// IMP=0x0060000000128cda
- (id)sampleBufferAttachments;	// IMP=0x0000000000128fc2
- (const struct MTLBlitPassDescriptorPrivate *)_descriptorPrivate;	// IMP=0x0000000000128fb2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000128f13
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000128de9
- (unsigned long long)hash;	// IMP=0x0000000000128d89
- (void)dealloc;	// IMP=0x0000000000128d47
- (id)init;	// IMP=0x0000000000128cf4

@end

