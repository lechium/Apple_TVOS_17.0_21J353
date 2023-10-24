//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PBSOverlayLayoutElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _PBSOverlayLayoutHandleElement : PBSOverlayLayoutElement
{
    _Bool _hidden;	// 8 = 0x8
}

@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000298f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000297b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFixed) _Bool fixed;
@property(nonatomic) struct CGRect frame;
@property(readonly) unsigned long long hash;
@property(nonatomic) struct CGVector stickiness;
@property(readonly) Class superclass;
@property(nonatomic) struct CGSize symmetricalMargin;

@end

