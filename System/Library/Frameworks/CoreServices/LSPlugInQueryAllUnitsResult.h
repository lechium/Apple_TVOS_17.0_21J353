//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSQueryResult.h"

@class NSArray, NSUUID;

__attribute__((visibility("hidden")))
@interface LSPlugInQueryAllUnitsResult : _LSQueryResult
{
    NSArray *_pluginUnits;	// 8 = 0x8
    NSUUID *_dbUUID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000007ead8
- (void).cxx_destruct;	// IMP=0x000000000007ed17
@property(readonly, nonatomic) NSUUID *dbUUID; // @synthesize dbUUID=_dbUUID;
@property(readonly, nonatomic) NSArray *pluginUnits; // @synthesize pluginUnits=_pluginUnits;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007ec7a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007eb8e
- (id)initWithPlugInUnits:(id)arg1 forDatabaseWithUUID:(id)arg2;	// IMP=0x000000000007eae0

@end

