//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMContainerSchemaContext, NSNumber;
@protocol MCMMetadataMinimal;

__attribute__((visibility("hidden")))
@interface MCMContainerSchema : NSObject
{
    id <MCMMetadataMinimal> _metadata;	// 8 = 0x8
    MCMContainerSchemaContext *_context;	// 16 = 0x10
    NSNumber *_latestSchemaVersion;	// 24 = 0x18
}

+ (id)containerSchemaWithMetadata:(id)arg1 dataProtectionClass:(int)arg2 libraryRepair:(id)arg3;	// IMP=0x00600000000aafb1
+ (_Bool)schemaIsUpToDateForIdentifier:(id)arg1 containerClass:(unsigned long long)arg2 currentSchemaVersion:(id)arg3 latestSchemaVersion:(id *)arg4;	// IMP=0x00600000000aadf7
- (void).cxx_destruct;	// IMP=0x00000000000aada1
@property(readonly, nonatomic) NSNumber *latestSchemaVersion; // @synthesize latestSchemaVersion=_latestSchemaVersion;
@property(readonly, nonatomic) MCMContainerSchemaContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id <MCMMetadataMinimal> metadata; // @synthesize metadata=_metadata;
- (_Bool)_executeActions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000aa7f3
- (id)_actionsFromVersion:(id)arg1 toTargetVersion:(id)arg2 context:(id)arg3;	// IMP=0x00000000000a9b8b
- (id)_interpolationReplacements;	// IMP=0x00000000000a995b
- (id)_actionArgsAfterInterpolationOnActionArgs:(id)arg1 replacements:(id)arg2;	// IMP=0x00000000000a9443
- (_Bool)writeSchemaToTargetVersion:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a9382
- (_Bool)writeSchemaFromVersion:(id)arg1 toTargetVersion:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a8a89
- (id)initWithMetadata:(id)arg1 dataProtectionClass:(int)arg2 libraryRepair:(id)arg3;	// IMP=0x00000000000a8869

@end

