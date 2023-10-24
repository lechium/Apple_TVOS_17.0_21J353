//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelLibrarySearchScope;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibrarySearchScope : NSObject
{
    MPModelLibrarySearchScope *_underlyingSearchScope;	// 8 = 0x8
    long long _modelObjectType;	// 16 = 0x10
}

+ (id)_topResultsRelationshipKeyForSpecificModelObjectType:(long long)arg1;	// IMP=0x0060000000002463
+ (id)scopeForTopResultsWithSpecificModelObjectTypeScopes:(id)arg1;	// IMP=0x0060000000001f5b
- (void).cxx_destruct;	// IMP=0x000000000000280e
@property(readonly, nonatomic) long long modelObjectType; // @synthesize modelObjectType=_modelObjectType;
- (long long)_modelObjectType;	// IMP=0x0000000000002459
- (id)_underlyingSearchScope;	// IMP=0x000000000000244b
- (id)initWithModelObjectType:(long long)arg1;	// IMP=0x0000000000001deb
- (id)_initWithUnderlyingSearchScope:(id)arg1 modelObjectType:(long long)arg2;	// IMP=0x0000000000001d74

@end
