//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPropertyAction;

__attribute__((visibility("hidden")))
@interface CNQuickPropertyAction
{
}

- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000185d3
- (unsigned long long)score;	// IMP=0x00000000000184c3
- (_Bool)enabled;	// IMP=0x0000000000018440
- (id)subtitleForContext:(long long)arg1;	// IMP=0x0000000000018344
- (id)titleForContext:(long long)arg1;	// IMP=0x00000000000182aa
- (id)identifier;	// IMP=0x0000000000018230
- (id)propertyItem;	// IMP=0x00000000000181e0
@property(readonly, nonatomic) CNPropertyAction *propertyAction;
- (id)initWithPropertyAction:(id)arg1;	// IMP=0x000000000001819f

@end

