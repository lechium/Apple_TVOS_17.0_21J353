//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _MKMultiPartLabelCacheKey : NSObject
{
    NSAttributedString *_attributedString;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000020b6e7
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)description;	// IMP=0x000000000020b612
- (unsigned long long)hash;	// IMP=0x000000000020b3f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020b275
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020b23b
- (id)initWithAttributedString:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x000000000020b1a8

@end
