//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIContext;

__attribute__((visibility("hidden")))
@interface _UIImageCIImageRenderer : NSObject
{
    struct __IOSurface *_surface;	// 8 = 0x8
    struct {
        unsigned int surfaceIsValid:1;
        unsigned int uses16bpc:1;
    } _flags;	// 16 = 0x10
    CIContext *_context;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006a57e1
- (void)dealloc;	// IMP=0x00000000006a50df

@end

