//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10LinkDaemon25_LNMetadataProviderDirect : NSObject
{
    MISSING_TYPE *connection;	// 8 = 0x8
    MISSING_TYPE *requiresAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00400000000784b6
- (id)init;	// IMP=0x0010000000078480
- (id)appShortcutsProviderMangledTypeNameForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000078385
- (long long)metadataVersionForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000078289
- (id)entitiesForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000781a6
- (id)entitiesWithError:(id *)arg1;	// IMP=0x0010000000078075
- (id)enumsForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000077a02
- (id)enumsWithError:(id *)arg1;	// IMP=0x00100000000779d8
- (id)queriesForBundleIdentifier:(id)arg1 ofType:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000776dc
- (id)queriesWithError:(id *)arg1;	// IMP=0x001000000007765f
- (id)bundlesWithError:(id *)arg1;	// IMP=0x00100000000773c8
- (id)actionsWithFullyQualifiedIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000772b8
- (id)actionsConformingToSystemProtocol:(id)arg1 withParametersOfTypes:(id)arg2 bundleIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000076f91
- (id)actionsForBundleIdentifier:(id)arg1 andActionIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000076afe
- (id)actionForBundleIdentifier:(id)arg1 andActionIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000769c1
- (id)actionsForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000768a1
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000767a1
- (id)actionsConformingToSystemProtocols:(id)arg1 logicalType:(unsigned long long)arg2 bundleIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000075f99
- (id)actionsWithError:(id *)arg1;	// IMP=0x0010000000075bef
- (id)initWithConnection:(id)arg1 options:(long long)arg2 error:(id *)arg3;	// IMP=0x001000000006ecaa

@end

