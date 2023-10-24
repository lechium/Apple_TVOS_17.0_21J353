//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFImage-Protocol.h>

@class NSData, NSDictionary, NSURL;

@protocol SFURLImage <SFImage>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSURL *darkUrlValue;
@property(copy, nonatomic) NSURL *urlValue;
@end

