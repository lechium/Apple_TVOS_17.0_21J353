//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (BSXPCObjectUtilitiesIndirect)
+ (_Bool)bs_isXPCObject;	// IMP=0x0060000000059a10
+ (id)bs_secureObjectFromData:(id)arg1 ofClasses:(id)arg2;	// IMP=0x0060000000073ced
+ (id)bs_secureObjectFromData:(id)arg1 ofClass:(Class)arg2;	// IMP=0x0060000000073c8a
+ (id)bs_secureDataFromObject:(id)arg1;	// IMP=0x0060000000073c75
+ (id)bs_secureDecodedFromData:(id)arg1 withAdditionalClasses:(id)arg2;	// IMP=0x00600000000734df
+ (id)bs_secureDecodedFromData:(id)arg1;	// IMP=0x00600000000730f3
+ (_Bool)bs_isPlistableType;	// IMP=0x0060000000072a01
+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0060000000089328
- (id)bs_secureEncoded;	// IMP=0x0010000000072c6a
- (_Bool)bs_isPlistableType;	// IMP=0x0010000000072c50
- (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0010000000089330
@end

