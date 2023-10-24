//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppPrototypeIdentifier, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IKAppDataItem : NSObject
{
    NSString *_type;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    IKAppPrototypeIdentifier *_prototypeIdentifier;	// 24 = 0x18
    NSDictionary *_dataDictionary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e1c0e
@property(readonly, copy, nonatomic) NSDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
@property(readonly, nonatomic) IKAppPrototypeIdentifier *prototypeIdentifier; // @synthesize prototypeIdentifier=_prototypeIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)valueForPropertyPath:(id)arg1;	// IMP=0x00000000000e1b45
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e1b3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e18b8
- (unsigned long long)hash;	// IMP=0x00000000000e1874
- (id)initWithType:(id)arg1 identifier:(id)arg2 prototypeIdentifier:(id)arg3 dataDictionary:(id)arg4;	// IMP=0x00000000000e1773

@end

