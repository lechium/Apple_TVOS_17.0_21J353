//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _MKPinAnnotationViewImageCacheKey : NSObject
{
    unsigned long long _mapType;	// 8 = 0x8
    UIColor *_pinColor;	// 16 = 0x10
    long long _idiom;	// 24 = 0x18
    long long _userInterfaceStyle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001e992b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e985f
- (unsigned long long)hash;	// IMP=0x00000000001e9830
- (id)initWithMapType:(unsigned long long)arg1 pinColor:(id)arg2 traits:(id)arg3;	// IMP=0x00000000001e9738

@end

