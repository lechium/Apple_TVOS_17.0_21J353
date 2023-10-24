//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface StorefrontInfo : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_countryCode;	// 16 = 0x10
    NSLocale *_locale;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000008b13
- (void).cxx_destruct;	// IMP=0x0000000000008d18
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008c17
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008b1b
- (id)initWithIdentifier:(id)arg1 countryCode:(id)arg2 locale:(id)arg3;	// IMP=0x0000000000008925

@end

