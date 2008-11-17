//
//  UserView.h
//  TwitterFon
//
//  Created by kaz on 11/16/08.
//  Copyright 2008 naan studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "User.h"
#import "TwitterClient.h"

typedef enum {
    FOLLOW_BUTTON_FOLLOW    = 0,
    FOLLOW_BUTTON_FOLLOWING = 1,
    FOLLOW_BUTTON_REMOVE    = 2,
} followButtonState;

@interface UserView : UIView {
    User*               user;
  	UIButton*           url;
    UIButton*           followButton;

    UIImage*            profileImage;
    UIImage*            lockIcon;
    CGImageRef          background;
    
    BOOL                following;
    BOOL                protected;
    followButtonState   buttonState;
    TwitterClient*      twitterClient;
    NSTimer*            timer;
    UILabel*            messageLabel;
}

@property(nonatomic, assign) User*      user;
@property(nonatomic, assign) BOOL       protected;
@property(nonatomic, retain) UIImage*   profileImage;

-(void)setUser:(User*)user delegate:(id)delegate;

-(void)setFriendship:(BOOL)exists;

@end