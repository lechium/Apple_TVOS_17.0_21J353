//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface _TVShadowViewElementID : NSObject
{
    IKViewElement *_viewElement;	// 8 = 0x8
    NSString *_itemID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d8d18
@property(readonly, copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (id)description;	// IMP=0x00000000000d8c87
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d8b64
- (unsigned long long)hash;	// IMP=0x00000000000d8acf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d8ac4
- (id)init;	// IMP=0x00000000000d8a99
- (id)initWithViewElement:(id)arg1;	// IMP=0x00000000000d8926

@end

