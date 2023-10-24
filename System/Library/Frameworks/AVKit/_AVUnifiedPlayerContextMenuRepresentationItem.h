//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _AVUnifiedPlayerContextMenuRepresentationItem : NSObject
{
    _Bool _on;	// 8 = 0x8
    NSString *_accessibilityIdentifier;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    unsigned long long _attributes;	// 40 = 0x28
    NSIndexPath *_actionIndexPath;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000012d907
@property(readonly, nonatomic) NSIndexPath *actionIndexPath; // @synthesize actionIndexPath=_actionIndexPath;
@property(readonly, nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
@property(readonly, nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic, getter=isDestructive) _Bool destructive;
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled;
- (id)initWithAction:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000012d6bf
- (id)initWithTitle:(id)arg1 image:(id)arg2 attributes:(unsigned long long)arg3 state:(long long)arg4 actionIndexPath:(id)arg5;	// IMP=0x000000000012d5db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

