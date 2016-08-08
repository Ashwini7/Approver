# Approver

Requirement:
­ where people can’t publish their articles, news and events without approval.
­ Basically it adds approver field to content type Create/Edit
­ Each content type have different approvers and different level of approvers, set by
admin (Eg: If an article is written by author then it should be approved by approver 1,
then it should go to approver 2 and finally approved by webmaster)
­ All types should have supporting file field, author can add as many files as he wants.
­ All types should have supporting image field, author can add as many images as he
wants.
­ Every type will be themable with at least 2 inbuild theme, from 2 themes 1 will be used
as default. (Theme will be used for both index and show page)
­ It will use views Module for Listing and teaser views
­ Module should have test cases.(TDD) : Doesn't required
­ Module will be plug and play and should be installable form modules menu.
­ Module settings will be configurable from drupal admin.
­ Module should be extendable and customizable from functionality and theming
prospective.
­ Custom themes and custom functionality settings will be configurable from drupal admin.
­ Module should follow all drupal standards and OOP’s standards


# Installation steps of module:
1. Install this module just like any drupal contrib module. All the dependencies will get downloaded and installed with it.
2. It will set the content listing view to your front page.
3. Add triggers for workflow to publish them on workflow state change. Goto this path admin/structure/trigger/node . 
3. Create some content of for listing and walk them through workflow to see them on front page.

# What things you will get from this module?

1. content type: Articles, News, Events with file, image and workflow field.
2. View : content listing of publish content
3. Different theme(seven) for listing and details page of content, rest pages will be using bartik. If the theme is disable bartik will be as fall back theme. config admin/config/user-interface/themekey .
4. Workflow : In-progress, Proof read and Publish
5. Roles: Approver 1 , Approver 2 and webmaster
6. Workflow based access to roles.
7. Permission alraedy setup for content creation of these types.

