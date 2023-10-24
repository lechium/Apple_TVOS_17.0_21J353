//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData;
@protocol PQLInjecting;

@interface CPLPrequeliteVariableGroup : NSObject
{
    NSData *_sqlForValues;	// 8 = 0x8
    NSData *_sqlForUpdates;	// 16 = 0x10
    id _defaultValuesObject;	// 24 = 0x18
    _Bool _shouldNotCacheValue;	// 32 = 0x20
    NSArray *_variables;	// 40 = 0x28
    id <PQLInjecting> _namesInjection;	// 48 = 0x30
    id <PQLInjecting> _definitionInjection;	// 56 = 0x38
}

+ (id)variableGroupWithVariablesAndGroups:(id)arg1;	// IMP=0x00400000000519cd
+ (id)variableGroupWithVariables:(id)arg1;	// IMP=0x0010000000051984
- (void).cxx_destruct;	// IMP=0x0020000000052829
@property(readonly, nonatomic) id <PQLInjecting> definitionInjection; // @synthesize definitionInjection=_definitionInjection;
@property(readonly, nonatomic) id <PQLInjecting> namesInjection; // @synthesize namesInjection=_namesInjection;
@property(nonatomic) _Bool shouldNotCacheValue; // @synthesize shouldNotCacheValue=_shouldNotCacheValue;
@property(readonly, nonatomic) NSArray *variables; // @synthesize variables=_variables;
@property(readonly, nonatomic) id <PQLInjecting> injectionForDefaultValuesUpdate;
- (id)injectionForUpdates:(id)arg1;	// IMP=0x0010000000052742
- (id)valuesInSet:(id)arg1;	// IMP=0x001000000005272e
- (id)valuesInSet:(id)arg1 startingAtIndex:(int)arg2;	// IMP=0x0010000000052520
@property(readonly, nonatomic) id <PQLInjecting> injectionForDefaultValues;
- (id)injectionForValues:(id)arg1;	// IMP=0x0010000000052460
- (id)_defaultValuesObject;	// IMP=0x00100000000521ee
- (id)initWithVariables:(id)arg1;	// IMP=0x0010000000051bee

@end

