//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class LNActionMetadata, LNSystemProtocol, NSArray, NSDictionary, NSSet, NSString;

@protocol LNMetadataProviderInterface <NSObject>
- (NSString *)appShortcutsProviderMangledTypeNameForBundleIdentifier:(NSString *)arg1 error:(id *)arg2;
- (long long)metadataVersionForBundleIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)entitiesForBundleIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSDictionary *)entitiesWithError:(id *)arg1;
- (NSArray *)enumsForBundleIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSDictionary *)enumsWithError:(id *)arg1;
- (NSArray *)queriesForBundleIdentifier:(NSString *)arg1 ofType:(NSString *)arg2 error:(id *)arg3;
- (NSDictionary *)queriesWithError:(id *)arg1;
- (NSArray *)bundlesWithError:(id *)arg1;
- (NSDictionary *)actionsWithFullyQualifiedIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (NSDictionary *)actionsConformingToSystemProtocol:(LNSystemProtocol *)arg1 withParametersOfTypes:(NSDictionary *)arg2 bundleIdentifier:(NSString *)arg3 error:(id *)arg4;
- (LNActionMetadata *)actionForBundleIdentifier:(NSString *)arg1 andActionIdentifier:(NSString *)arg2 error:(id *)arg3;
- (NSArray *)actionsForBundleIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSDictionary *)actionsAndSystemProtocolDefaultsForBundleIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSDictionary *)actionsConformingToSystemProtocols:(NSSet *)arg1 logicalType:(unsigned long long)arg2 bundleIdentifier:(NSString *)arg3 error:(id *)arg4;
- (NSArray *)actionsForBundleIdentifier:(NSString *)arg1 andActionIdentifier:(NSString *)arg2 error:(id *)arg3;
- (NSDictionary *)actionsWithError:(id *)arg1;
@end

