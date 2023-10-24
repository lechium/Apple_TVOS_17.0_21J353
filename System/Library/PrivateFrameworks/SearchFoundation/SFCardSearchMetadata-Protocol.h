//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFCardSearchMetadata <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) _Bool isFederatedDomainSearch;
@property(copy, nonatomic) NSString *viewConfigName;
@property(copy, nonatomic) NSString *searchQuery;
@property(nonatomic) _Bool isServerEntity;
@end

