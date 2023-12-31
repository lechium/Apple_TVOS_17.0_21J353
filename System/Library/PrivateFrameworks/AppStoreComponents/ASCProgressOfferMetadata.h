//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ASCOfferMetadata.h"

__attribute__((visibility("hidden")))
@interface ASCProgressOfferMetadata : ASCOfferMetadata
{
    _Bool _indeterminate;	// 8 = 0x8
    double _percent;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000039d7e
@property(nonatomic, getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(readonly, nonatomic) double percent; // @synthesize percent=_percent;
- (_Bool)isProgress;	// IMP=0x000000000003a03f
- (id)description;	// IMP=0x0000000000039fb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000039eee
- (unsigned long long)hash;	// IMP=0x0000000000039e85
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039e02
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000039d86
- (id)initIndeterminate;	// IMP=0x0000000000039d35
- (id)initWithPercent:(double)arg1;	// IMP=0x0000000000039ceb

@end

