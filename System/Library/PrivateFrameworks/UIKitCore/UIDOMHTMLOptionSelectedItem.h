//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMHTMLOptionElement;

__attribute__((visibility("hidden")))
@interface UIDOMHTMLOptionSelectedItem : NSObject
{
    _Bool _selected;	// 8 = 0x8
    DOMHTMLOptionElement *_node;	// 16 = 0x10
}

@property(retain, nonatomic) DOMHTMLOptionElement *_node; // @synthesize _node;
- (void)dealloc;	// IMP=0x000000000076fcfb
- (void)unselect;	// IMP=0x000000000076fcf1
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000076fcd8
- (_Bool)isGroup;	// IMP=0x000000000076fcd0
- (_Bool)selected;	// IMP=0x000000000076fcc7
- (id)node;	// IMP=0x000000000076fcbd
- (id)initWithHTMLOptionNode:(id)arg1;	// IMP=0x000000000076fc4e

@end

