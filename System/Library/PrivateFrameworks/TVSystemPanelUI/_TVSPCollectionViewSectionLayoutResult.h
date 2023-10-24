//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _TVSPCollectionViewSectionLayoutResult : NSObject
{
    NSString *_sectionID;	// 8 = 0x8
    double _height;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    struct NSDirectionalEdgeInsets _contentInsets;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000073100
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (id)description;	// IMP=0x0000000000072f00
- (id)initWithSectionID:(id)arg1 height:(double)arg2 items:(id)arg3 contentInsets:(struct NSDirectionalEdgeInsets)arg4;	// IMP=0x0000000000072dc0

@end

