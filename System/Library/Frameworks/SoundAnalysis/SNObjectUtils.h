//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNObjectUtils : NSObject
{
}

+ (_Bool)validateEqualityBetweenObject:(id)arg1 expected:(id)arg2 error:(id *)arg3;	// IMP=0x008000000003fdc0
+ (_Bool)checkEqualityAllowingNilBetweenObject:(id)arg1 andOther:(id)arg2;	// IMP=0x008000000003fc19
+ (_Bool)checkTransformDoesNotChangeObject:(id)arg1 transform:(CDUnknownBlockType)arg2;	// IMP=0x008000000003fb65
+ (_Bool)checkTransformsDoNotChangeObject:(id)arg1 transforms:(id)arg2;	// IMP=0x008000000003f965
+ (_Bool)validateClassOfObject:(id)arg1 isKindOf:(Class)arg2 error:(id *)arg3;	// IMP=0x008000000003f85b
+ (_Bool)validateClassOfObject:(id)arg1 isKindOfAnyOfOptions:(id)arg2 error:(id *)arg3;	// IMP=0x008000000003f7bd
+ (_Bool)classOfObject:(id)arg1 isKindOfAnyOfOptions:(id)arg2;	// IMP=0x008000000003f548
- (id)init;	// IMP=0x000000000003fe78

@end
