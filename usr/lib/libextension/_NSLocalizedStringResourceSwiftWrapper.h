//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSLocale, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _NSLocalizedStringResourceSwiftWrapper : NSObject
{
    MISSING_TYPE *wrapped;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000003b3d50
- (void).cxx_destruct;	// IMP=0x00000000003b4f50
- (id)init;	// IMP=0x00000000003b4ef0
- (id)localizeWithOptions:(id)arg1;	// IMP=0x00000000003b4d30
- (id)localize;	// IMP=0x00000000003b47f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003b42c0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003b4060
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003b3cc0
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000003b39f0
- (id)initWithKey:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 locale:(id)arg4 bundleURL:(id)arg5;	// IMP=0x00000000003b3840
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, copy) NSLocale *locale;
@property(nonatomic, readonly) NSURL *bundleURL;
@property(nonatomic, readonly) NSString *table;
@property(nonatomic, readonly) NSString *defaultValue;
@property(nonatomic, readonly) NSString *key;

@end
