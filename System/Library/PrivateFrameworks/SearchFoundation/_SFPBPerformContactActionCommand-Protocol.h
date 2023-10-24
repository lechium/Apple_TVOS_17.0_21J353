//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _SFPBPerformContactActionCommand <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) _Bool didSelectFromOptionsMenu;
@property(nonatomic) _Bool didDisplayHandleOptions;
@property(nonatomic) int contactActionType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

