//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSCopying><NSObject><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _GCSyntheticControllerDescription : NSObject
{
    id <NSCopying><NSObject><NSSecureCoding> _controllerIdentifier;	// 8 = 0x8
    NSString *_persistentIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cf4f1
@property(readonly) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly) id <NSCopying><NSObject><NSSecureCoding> controllerIdentifier; // @synthesize controllerIdentifier=_controllerIdentifier;
- (id)debugDescription;	// IMP=0x00000000000cf454
- (id)description;	// IMP=0x00000000000cf41a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cf395
- (_Bool)isEqualToDescription:(id)arg1;	// IMP=0x00000000000cf37b
- (unsigned long long)hash;	// IMP=0x00000000000cf365
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cf35a
- (id)init;	// IMP=0x00000000000cf32f
- (id)initWithControllerIdentifier:(id)arg1 persistentIdentifier:(id)arg2;	// IMP=0x00000000000cf278

@end

