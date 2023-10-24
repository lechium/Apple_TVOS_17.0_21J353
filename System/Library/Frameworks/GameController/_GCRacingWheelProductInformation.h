//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _GCRacingWheelProductInformation : NSObject
{
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 8 = 0x8
    NSString *_productCategory;	// 16 = 0x10
    NSString *_vendorName;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000007f5b2
- (void).cxx_destruct;	// IMP=0x000000000007f8df
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSString *productCategory; // @synthesize productCategory=_productCategory;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)capture;	// IMP=0x000000000007f890
- (void)setDevice:(id)arg1;	// IMP=0x000000000007f88a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007f7a7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007f689
- (id)init;	// IMP=0x000000000007f62f
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000007f5ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

