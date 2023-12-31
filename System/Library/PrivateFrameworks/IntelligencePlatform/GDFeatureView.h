//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GDSQLFeatureRetriever, _PASSqliteDatabase;
@protocol GDViewAccessAssertion;

@interface GDFeatureView : NSObject
{
    id <GDViewAccessAssertion> _accessAssertion;	// 8 = 0x8
    _PASSqliteDatabase *_db;	// 16 = 0x10
    GDSQLFeatureRetriever *_featureRetriever;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000030edbd
- (id)expectedFeatureKeysWithError:(id *)arg1;	// IMP=0x000000000030ed45
- (id)featureKeysWithError:(id *)arg1;	// IMP=0x000000000030ecf2
- (id)featureForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000030ec6b
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;	// IMP=0x000000000030eba4

@end

