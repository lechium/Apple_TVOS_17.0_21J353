//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCopyItem-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFCoreSpotlightCopyItem <SFCopyItem>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *coreSpotlightIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(copy, nonatomic) NSArray *fileProviderTypeIdentifiers;
@property(copy, nonatomic) NSArray *dataProviderTypeIdentifiers;
@end

