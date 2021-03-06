//
//  ESDialogController.h
//  ESJsonFormat
//
//  Created by 尹桥印 on 15/6/26.
//  Copyright (c) 2015年 EnjoySR. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ESDialogController : NSWindowController
@property (nonatomic, copy) NSString *msg;
@property (nonatomic, copy) NSString *className;
@property (nonatomic, copy) void (^useDefaultBlock)(NSString *className);
@property (nonatomic, copy) void (^enterBlock)(NSString *className);


-(void)setDataWithMsg:(NSString *)msg defaultClassName:(NSString *)className useDefault:(void(^)(NSString *className))useDefaultBlock enter:(void(^)(NSString *className))enterBlock;

@end
