//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSLayoutRule, _NSLayoutRuleNodeParent;

@interface _NSLayoutRuleNode : NSObject
{
    id <NSLayoutRule> _representedRule;	// 8 = 0x8
    id <_NSLayoutRuleNodeParent> _parentNode;	// 16 = 0x10
}

@property id <_NSLayoutRuleNodeParent> parentNode; // @synthesize parentNode=_parentNode;
@property(copy) id <NSLayoutRule> representedRule; // @synthesize representedRule=_representedRule;
- (id)description;	// IMP=0x0000000000018d8f
- (void)dealloc;	// IMP=0x0000000000018d54
- (id)initWithRule:(id)arg1;	// IMP=0x0000000000018cfb

@end

